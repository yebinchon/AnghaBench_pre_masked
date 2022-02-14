
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int const u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct i2c_device_addr {int dummy; } ;
struct firmware {int size; int const* data; } ;
struct drxu_code_info {char* mc_file; } ;
struct drxu_code_block_hdr {int addr; int size; int flags; scalar_t__ CRC; } ;
struct drx_demod_instance {struct firmware const* firmware; TYPE_2__* i2c; struct i2c_device_addr* my_i2c_dev_addr; } ;
typedef enum drxu_code_action { ____Placeholder_drxu_code_action } drxu_code_action ;
typedef int dr_xaddr_t ;
typedef int __be32 ;
typedef int __be16 ;
struct TYPE_3__ {int parent; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct drx_demod_instance*,int const*,unsigned int) ;
 scalar_t__ FUNC_3 (int const*,int) ;
 int FUNC_4 (struct i2c_device_addr*,int,scalar_t__,int const*,int) ;
 int FUNC_5 (struct i2c_device_addr*,int,scalar_t__,int const*,int) ;
 int FUNC_6 (int const*,int const*,int) ;
 int FUNC_7 (char*,int,int,int,int,scalar_t__) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (struct firmware const*) ;
 int FUNC_11 (struct firmware const**,char*,int ) ;

__attribute__((used)) static int FUNC_12(struct drx_demod_instance *VAR_5,
         struct drxu_code_info *VAR_6,
         enum drxu_code_action VAR_7)
{
 struct i2c_device_addr *VAR_8 = VAR_5->my_i2c_dev_addr;
 int VAR_9;
 u16 VAR_10 = 0;
 u16 VAR_11 = 0;
 u16 VAR_12 = 0;
 const u8 *VAR_13 = ((void*)0);
 u8 *VAR_14 = ((void*)0);
 unsigned VAR_15;
 char *VAR_16;


 if (!VAR_6 || !VAR_6->mc_file)
  return -VAR_3;

 VAR_16 = VAR_6->mc_file;

 if (!VAR_5->firmware) {
  const struct firmware *VAR_17 = ((void*)0);

  VAR_9 = FUNC_11(&VAR_17, VAR_16, VAR_5->i2c->dev.parent);
  if (VAR_9 < 0) {
   FUNC_8("Couldn't read firmware %s\n", VAR_16);
   return VAR_9;
  }
  VAR_5->firmware = VAR_17;

  if (VAR_5->firmware->size < 2 * sizeof(u16)) {
   VAR_9 = -VAR_3;
   FUNC_8("Firmware is too short!\n");
   goto release;
  }

  FUNC_9("Firmware %s, size %zu\n",
   VAR_16, VAR_5->firmware->size);
 }

 VAR_13 = VAR_5->firmware->data;
 VAR_15 = VAR_5->firmware->size;

 VAR_14 = (void *)VAR_13;

 VAR_12 = FUNC_0(*(__be16 *)(VAR_14));
 VAR_14 += sizeof(u16);
 VAR_11 = FUNC_0(*(__be16 *)(VAR_14));
 VAR_14 += sizeof(u16);

 if ((VAR_12 != VAR_1) || (VAR_11 == 0)) {
  VAR_9 = -VAR_3;
  FUNC_8("Firmware magic word doesn't match\n");
  goto release;
 }

 if (VAR_7 == 129) {
  VAR_9 = FUNC_2(VAR_5, (u8 *)VAR_13, VAR_15);
  if (VAR_9)
   goto release;
  FUNC_9("Uploading firmware %s\n", VAR_16);
 } else {
  FUNC_9("Verifying if firmware upload was ok.\n");
 }


 for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
  struct drxu_code_block_hdr VAR_18;
  u16 VAR_19 = 0;


  VAR_18.addr = FUNC_1(*(__be32 *)(VAR_14));
  VAR_14 += sizeof(u32);
  VAR_18.size = FUNC_0(*(__be16 *)(VAR_14));
  VAR_14 += sizeof(u16);
  VAR_18.flags = FUNC_0(*(__be16 *)(VAR_14));
  VAR_14 += sizeof(u16);
  VAR_18.CRC = FUNC_0(*(__be16 *)(VAR_14));
  VAR_14 += sizeof(u16);

  FUNC_7("%zd: addr %u, size %u, flags 0x%04x, CRC 0x%04x\n",
   (VAR_14 - VAR_13), VAR_18.addr,
    VAR_18.size, VAR_18.flags, VAR_18.CRC);





  if ((VAR_18.size > 0x7FFF) ||
      (((VAR_18.flags & VAR_0) != 0) &&
       (VAR_18.CRC != FUNC_3(VAR_14, VAR_18.size)))
      ) {

   VAR_9 = -VAR_3;
   FUNC_8("firmware CRC is wrong\n");
   goto release;
  }

  if (!VAR_18.size)
   continue;

  VAR_19 = VAR_18.size * ((u16) sizeof(u16));


  switch (VAR_7) {
  case 129:
   if (FUNC_5(VAR_8,
       VAR_18.addr,
       VAR_19,
       VAR_14, 0x0000)) {
    VAR_9 = -VAR_4;
    FUNC_8("error writing firmware at pos %zd\n",
           VAR_14 - VAR_13);
    goto release;
   }
   break;
  case 128: {
   int VAR_20 = 0;
   u8 VAR_21[VAR_2];
   u32 VAR_22 = 0;
   u32 VAR_23 = VAR_19;
   u32 VAR_24 = VAR_18.addr;
   u8 *VAR_25 = VAR_14;

   while (VAR_23 != 0) {
    if (VAR_23 > VAR_2)
     VAR_22 = VAR_2;
    else
     VAR_22 = VAR_23;

    if (FUNC_4(VAR_8,
          VAR_24,
          (u16)VAR_22,
          (u8 *)VAR_21,
          0x0000)) {
     FUNC_8("error reading firmware at pos %zd\n",
            VAR_14 - VAR_13);
     return -VAR_4;
    }

    VAR_20 = FUNC_6(VAR_25, VAR_21,
      VAR_22);

    if (VAR_20) {
     FUNC_8("error verifying firmware at pos %zd\n",
            VAR_14 - VAR_13);
     return -VAR_4;
    }

    VAR_24 += ((dr_xaddr_t)(VAR_22 / 2));
    VAR_25 =&(VAR_25[VAR_22]);
    VAR_23 -=((u32) VAR_22);
   }
   break;
  }
  default:
   return -VAR_3;
   break;

  }
  VAR_14 += VAR_19;
 }

 return 0;

release:
 FUNC_10(VAR_5->firmware);
 VAR_5->firmware = ((void*)0);

 return VAR_9;
}
