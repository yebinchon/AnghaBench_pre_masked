
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct kimage {int dummy; } ;
typedef int fdt64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (void*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int const) ;
 int FUNC_3 (void*,unsigned long,unsigned long) ;
 int FUNC_4 (void*,int,char*) ;
 int FUNC_5 (void*,int,char*) ;
 void* FUNC_6 (void*,int,char*,int *) ;
 int FUNC_7 (void*,char*) ;
 int FUNC_8 (void*,int,char*,int *,int ) ;
 int FUNC_9 (void*,int,char*,char const*) ;
 int FUNC_10 (void*,int,char*,unsigned long) ;
 int FUNC_11 (int) ;
 scalar_t__ FUNC_12 (int ) ;
 int VAR_4 ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*,...) ;
 scalar_t__ FUNC_15 (scalar_t__,int ) ;
 int FUNC_16 (struct kimage const*,void*,int) ;

int FUNC_17(const struct kimage *VAR_5, void *VAR_6,
    unsigned long VAR_7, unsigned long VAR_8,
    const char *VAR_9)
{
 int VAR_10, VAR_11;
 const void *VAR_12;


 VAR_10 = FUNC_1(VAR_6, FUNC_0(VAR_4),
     FUNC_12(VAR_4));
 if (VAR_10 == 0)
  FUNC_13("Removed old device tree reservation.\n");
 else if (VAR_10 != -VAR_1)
  return VAR_10;

 VAR_11 = FUNC_7(VAR_6, "/chosen");
 if (VAR_11 == -VAR_2) {
  VAR_11 = FUNC_4(VAR_6, FUNC_7(VAR_6, "/"),
           "chosen");
  if (VAR_11 < 0) {
   FUNC_14("Error creating /chosen.\n");
   return -VAR_0;
  }
 } else if (VAR_11 < 0) {
  FUNC_14("Malformed device tree: error reading /chosen.\n");
  return -VAR_0;
 }


 VAR_12 = FUNC_6(VAR_6, VAR_11, "linux,initrd-start", ((void*)0));
 if (VAR_12) {
  uint64_t VAR_13, VAR_14, VAR_15;

  VAR_13 = FUNC_2(*((const fdt64_t *) VAR_12));

  VAR_12 = FUNC_6(VAR_6, VAR_11, "linux,initrd-end", ((void*)0));
  if (!VAR_12) {
   FUNC_14("Malformed device tree.\n");
   return -VAR_0;
  }
  VAR_14 = FUNC_2(*((const fdt64_t *) VAR_12));





  VAR_15 = VAR_14 - VAR_13;
  VAR_10 = FUNC_1(VAR_6, VAR_13, VAR_15);
  if (VAR_10 == -VAR_1)
   VAR_10 = FUNC_1(VAR_6, VAR_13,
       FUNC_15(VAR_15, VAR_3));
  if (VAR_10 == 0)
   FUNC_13("Removed old initrd reservation.\n");
  else if (VAR_10 != -VAR_1)
   return VAR_10;


  if (VAR_8 == 0) {
   VAR_10 = FUNC_5(VAR_6, VAR_11,
       "linux,initrd-start");
   if (VAR_10) {
    FUNC_14("Error deleting linux,initrd-start.\n");
    return -VAR_0;
   }

   VAR_10 = FUNC_5(VAR_6, VAR_11, "linux,initrd-end");
   if (VAR_10) {
    FUNC_14("Error deleting linux,initrd-end.\n");
    return -VAR_0;
   }
  }
 }

 if (VAR_8) {
  VAR_10 = FUNC_10(VAR_6, VAR_11,
          "linux,initrd-start",
          VAR_7);
  if (VAR_10 < 0)
   goto err;


  VAR_10 = FUNC_10(VAR_6, VAR_11, "linux,initrd-end",
          VAR_7 + VAR_8);
  if (VAR_10 < 0)
   goto err;

  VAR_10 = FUNC_3(VAR_6, VAR_7, VAR_8);
  if (VAR_10) {
   FUNC_14("Error reserving initrd memory: %s\n",
          FUNC_11(VAR_10));
   return -VAR_0;
  }
 }

 if (VAR_9 != ((void*)0)) {
  VAR_10 = FUNC_9(VAR_6, VAR_11, "bootargs", VAR_9);
  if (VAR_10 < 0)
   goto err;
 } else {
  VAR_10 = FUNC_5(VAR_6, VAR_11, "bootargs");
  if (VAR_10 && VAR_10 != -VAR_2) {
   FUNC_14("Error deleting bootargs.\n");
   return -VAR_0;
  }
 }

 VAR_10 = FUNC_16(VAR_5, VAR_6, VAR_11);
 if (VAR_10) {
  FUNC_14("Error setting up the new device tree.\n");
  return VAR_10;
 }

 VAR_10 = FUNC_8(VAR_6, VAR_11, "linux,booted-from-kexec", ((void*)0), 0);
 if (VAR_10)
  goto err;

 return 0;

err:
 FUNC_14("Error setting up the new device tree.\n");
 return -VAR_0;
}
