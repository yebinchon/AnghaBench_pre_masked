
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {struct list_head* prev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 struct list_head VAR_2 ;
 unsigned int FUNC_4 (int ,int ,int ) ;
 struct device* FUNC_5 (struct list_head*) ;

__attribute__((used)) static int FUNC_6(unsigned int VAR_3)
{
 int VAR_4 = 0;
 struct list_head *VAR_5;

 FUNC_2();
 VAR_5 = VAR_2.prev;
 while (VAR_5 != &VAR_2) {
  struct device * VAR_6 = FUNC_5(VAR_5);
  unsigned int VAR_7 = FUNC_4(VAR_1, FUNC_1(VAR_6), VAR_0);
  if (VAR_7 == VAR_3) {
   FUNC_0(VAR_6, "hash matches\n");
   VAR_4++;
  }
  VAR_5 = VAR_5->prev;
 }
 FUNC_3();
 return VAR_4;
}
