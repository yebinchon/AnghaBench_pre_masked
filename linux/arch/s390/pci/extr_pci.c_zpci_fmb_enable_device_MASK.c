
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u64 ;
struct zpci_fib {int fmb_addr; int member_0; } ;
struct zpci_dev {int fmb_length; int * fmb; int unmapped_pages; int mapped_pages; int allocated_pages; int fh; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_4 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int *) ;
 int * FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;
 int VAR_5 ;
 scalar_t__ FUNC_6 (int,struct zpci_fib*,scalar_t__*) ;

int FUNC_7(struct zpci_dev *VAR_6)
{
 u64 VAR_7 = FUNC_1(VAR_6->fh, 0, VAR_4);
 struct zpci_fib VAR_8 = {0};
 u8 VAR_9, VAR_10;

 if (VAR_6->fmb || sizeof(*VAR_6->fmb) < VAR_6->fmb_length)
  return -VAR_0;

 VAR_6->fmb = FUNC_4(VAR_5, VAR_3);
 if (!VAR_6->fmb)
  return -VAR_2;
 FUNC_0((u64) VAR_6->fmb & 0xf);


 FUNC_2(&VAR_6->allocated_pages, 0);
 FUNC_2(&VAR_6->mapped_pages, 0);
 FUNC_2(&VAR_6->unmapped_pages, 0);

 VAR_8.fmb_addr = FUNC_5(VAR_6->fmb);
 VAR_9 = FUNC_6(VAR_7, &VAR_8, &VAR_10);
 if (VAR_9) {
  FUNC_3(VAR_5, VAR_6->fmb);
  VAR_6->fmb = ((void*)0);
 }
 return VAR_9 ? -VAR_1 : 0;
}
