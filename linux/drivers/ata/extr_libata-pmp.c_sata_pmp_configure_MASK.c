
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {struct ata_port* ap; } ;
struct ata_port {int flags; TYPE_1__ link; } ;
struct ata_device {int* gscr; int flags; TYPE_1__* link; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct ata_device*,char*,char const*,unsigned int) ;
 int FUNC_1 (struct ata_device*,char*,...) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (int*) ;
 unsigned int FUNC_6 (TYPE_1__*,int ,int*) ;
 int FUNC_7 (int*) ;
 unsigned int FUNC_8 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int FUNC_9(struct ata_device *VAR_11, int VAR_12)
{
 struct ata_port *VAR_13 = VAR_11->link->ap;
 u32 *VAR_14 = VAR_11->gscr;
 u16 VAR_15 = FUNC_5(VAR_14);
 u16 VAR_16 = FUNC_2(VAR_14);
 unsigned int VAR_17 = 0;
 const char *VAR_18;
 int VAR_19, VAR_20;

 VAR_19 = FUNC_3(VAR_14);

 if (VAR_19 <= 0 || VAR_19 > VAR_9) {
  VAR_20 = -VAR_2;
  VAR_18 = "invalid nr_ports";
  goto fail;
 }

 if ((VAR_13->flags & VAR_1) &&
     (VAR_14[VAR_7] & VAR_5))
  VAR_11->flags |= VAR_0;


 VAR_17 = FUNC_8(VAR_11->link, VAR_6,
      VAR_10);
 if (VAR_17) {
  VAR_20 = -VAR_3;
  VAR_18 = "failed to write GSCR_ERROR_EN";
  goto fail;
 }







 if (VAR_15 == 0x1095 && (VAR_16 == 0x3726 || VAR_16 == 0x3826)) {
  u32 VAR_21;

  VAR_17 = FUNC_6(&VAR_13->link, VAR_4, &VAR_21);
  if (VAR_17) {
   VAR_20 = -VAR_3;
   VAR_18 = "failed to read Sil3x26 Private Register";
   goto fail;
  }
  VAR_21 &= ~0x1;
  VAR_17 = FUNC_8(&VAR_13->link, VAR_4, VAR_21);
  if (VAR_17) {
   VAR_20 = -VAR_3;
   VAR_18 = "failed to write Sil3x26 Private Register";
   goto fail;
  }
 }

 if (VAR_12) {
  FUNC_1(VAR_11, "Port Multiplier %s, "
        "0x%04x:0x%04x r%d, %d ports, feat 0x%x/0x%x\n",
        FUNC_7(VAR_14), VAR_15, VAR_16,
        FUNC_4(VAR_14),
        VAR_19, VAR_14[VAR_8],
        VAR_14[VAR_7]);

  if (!(VAR_11->flags & VAR_0))
   FUNC_1(VAR_11,
    "Asynchronous notification not supported, "
    "hotplug won't work on fan-out ports. Use warm-plug instead.\n");
 }

 return 0;

 fail:
 FUNC_0(VAR_11,
      "failed to configure Port Multiplier (%s, Emask=0x%x)\n",
      VAR_18, VAR_17);
 return VAR_20;
}
