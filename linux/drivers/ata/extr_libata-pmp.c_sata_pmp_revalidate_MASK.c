
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ata_port {scalar_t__ sector_buf; } ;
struct ata_link {struct ata_port* ap; } ;
struct ata_device {int gscr; struct ata_link* link; } ;
typedef int gscr ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (unsigned int) ;
 int FUNC_2 (struct ata_device*) ;
 int FUNC_3 (struct ata_device*,char*,int) ;
 int FUNC_4 (struct ata_link*,int *,int ) ;
 int FUNC_5 (struct ata_link*,int *,int ) ;
 int FUNC_6 (int ,int *,int) ;
 int FUNC_7 (struct ata_device*,int ) ;
 int FUNC_8 (struct ata_device*,int *) ;
 int FUNC_9 (struct ata_device*,int *) ;

__attribute__((used)) static int FUNC_10(struct ata_device *VAR_4, unsigned int VAR_5)
{
 struct ata_link *VAR_6 = VAR_4->link;
 struct ata_port *VAR_7 = VAR_6->ap;
 u32 *VAR_8 = (void *)VAR_7->sector_buf;
 int VAR_9;

 FUNC_0("ENTER\n");

 FUNC_4(VAR_6, ((void*)0), VAR_1);

 if (!FUNC_2(VAR_4)) {
  VAR_9 = -VAR_2;
  goto fail;
 }


 if (FUNC_1(VAR_5) && VAR_5 != VAR_0) {
  VAR_9 = -VAR_2;
  goto fail;
 }


 VAR_9 = FUNC_8(VAR_4, VAR_8);
 if (VAR_9)
  goto fail;


 if (!FUNC_9(VAR_4, VAR_8)) {
  VAR_9 = -VAR_2;
  goto fail;
 }

 FUNC_6(VAR_4->gscr, VAR_8, sizeof(VAR_8[0]) * VAR_3);

 VAR_9 = FUNC_7(VAR_4, 0);
 if (VAR_9)
  goto fail;

 FUNC_5(VAR_6, ((void*)0), VAR_1);

 FUNC_0("EXIT, rc=0\n");
 return 0;

 fail:
 FUNC_3(VAR_4, "PMP revalidation failed (errno=%d)\n", VAR_9);
 FUNC_0("EXIT, rc=%d\n", VAR_9);
 return VAR_9;
}
