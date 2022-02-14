
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 () ;
 int VAR_7 ;
 scalar_t__ FUNC_3 () ;
 int VAR_8 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct file*,int *,int *) ;

__attribute__((used)) static __poll_t FUNC_6(struct file *VAR_9, poll_table * VAR_10)
{
 __poll_t VAR_11 = 0;
 unsigned long VAR_12;

 FUNC_0(" dtlk_poll");






 FUNC_5(VAR_9, &VAR_6, VAR_10);

 if (VAR_5 && FUNC_2()) {
         FUNC_1(&VAR_7);
  VAR_11 = VAR_0 | VAR_2;
 }
 if (FUNC_3()) {
         FUNC_1(&VAR_7);
  VAR_11 |= VAR_1 | VAR_3;
 }



 VAR_12 = VAR_8 + 3*VAR_4 / 100;
 FUNC_4(&VAR_7, VAR_12);

 return VAR_11;
}
