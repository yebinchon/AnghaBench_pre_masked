
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {struct list_head* prev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 char* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 struct list_head VAR_4 ;
 unsigned int FUNC_4 (int ,int ,int ) ;
 unsigned int VAR_5 ;
 int FUNC_5 (char*,size_t,char*,char*) ;
 struct device* FUNC_6 (struct list_head*) ;

int FUNC_7(char *VAR_6, size_t VAR_7)
{
 unsigned int VAR_8 = VAR_5 / (VAR_3 * VAR_2);
 int VAR_9 = 0;
 struct list_head *VAR_10;





 FUNC_2();
 VAR_10 = VAR_4.prev;
 while (VAR_7 && VAR_10 != &VAR_4) {
  struct device *VAR_11 = FUNC_6(VAR_10);
  unsigned int VAR_12 = FUNC_4(VAR_1, FUNC_1(VAR_11),
      VAR_0);
  if (VAR_12 == VAR_8) {
   int VAR_13 = FUNC_5(VAR_6, VAR_7, "%s\n",
         FUNC_0(VAR_11));
   if (VAR_13 > VAR_7)
    VAR_13 = VAR_7;
   VAR_6 += VAR_13;
   VAR_9 += VAR_13;
   VAR_7 -= VAR_13;
  }
  VAR_10 = VAR_10->prev;
 }
 FUNC_3();
 return VAR_9;
}
