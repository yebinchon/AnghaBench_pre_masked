
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mthca_mailbox {int dma; int * buf; } ;
struct mthca_dev {int ddr_start; int ddr_end; int mthca_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct mthca_mailbox*) ;
 int VAR_3 ;
 int FUNC_1 (int,int *,int ) ;
 int FUNC_2 (struct mthca_mailbox*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct mthca_mailbox* FUNC_3 (struct mthca_dev*,int ) ;
 int FUNC_4 (struct mthca_dev*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_5 (struct mthca_dev*,char*,...) ;
 int FUNC_6 (struct mthca_dev*,struct mthca_mailbox*) ;
 int FUNC_7 (struct mthca_dev*,char*,char*) ;

int FUNC_8(struct mthca_dev *VAR_8)
{
 struct mthca_mailbox *VAR_9;
 u8 VAR_10;
 u32 *VAR_11;
 int VAR_12 = 0;
 VAR_9 = FUNC_3(VAR_8, VAR_2);
 if (FUNC_0(VAR_9))
  return FUNC_2(VAR_9);
 VAR_11 = VAR_9->buf;

 VAR_12 = FUNC_4(VAR_8, 0, VAR_9->dma, 0, 0, VAR_0,
       VAR_1);

 if (VAR_12)
  goto out;

 FUNC_1(VAR_8->ddr_start, VAR_11, 0x00);
 FUNC_1(VAR_8->ddr_end, VAR_11, 0x08);
 FUNC_1(VAR_10, VAR_11, 0x13);

 if (!!(VAR_10 & (1 << 4)) !=
     !!(VAR_8->mthca_flags & VAR_3)) {
  FUNC_7(VAR_8, "FW reports that HCA-attached memory "
      "is %s hidden; does not match PCI config\n",
      (VAR_10 & (1 << 4)) ?
      "" : "not");
 }
 if (VAR_10 & (1 << 4))
  FUNC_5(VAR_8, "HCA-attached memory is hidden.\n");

 FUNC_5(VAR_8, "HCA memory size %d KB (start %llx, end %llx)\n",
    (int) ((VAR_8->ddr_end - VAR_8->ddr_start) >> 10),
    (unsigned long long) VAR_8->ddr_start,
    (unsigned long long) VAR_8->ddr_end);

out:
 FUNC_6(VAR_8, VAR_9);
 return VAR_12;
}
