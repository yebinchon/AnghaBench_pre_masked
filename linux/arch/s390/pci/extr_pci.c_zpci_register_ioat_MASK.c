
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct zpci_fib {int pba; int pal; int iota; int member_0; } ;
struct zpci_dev {int fh; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int,struct zpci_fib*,int *) ;

int FUNC_3(struct zpci_dev *VAR_3, u8 VAR_4,
         u64 VAR_5, u64 VAR_6, u64 VAR_7)
{
 u64 VAR_8 = FUNC_1(VAR_3->fh, VAR_4, VAR_2);
 struct zpci_fib VAR_9 = {0};
 u8 VAR_10;

 FUNC_0(VAR_7 & 0x3fff);
 VAR_9.pba = VAR_5;
 VAR_9.pal = VAR_6;
 VAR_9.iota = VAR_7 | VAR_1;
 return FUNC_2(VAR_8, &VAR_9, &VAR_10) ? -VAR_0 : 0;
}
