
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int poll_nsec; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_1(struct request_queue *VAR_1, char *VAR_2)
{
 int VAR_3;

 if (VAR_1->poll_nsec == VAR_0)
  VAR_3 = VAR_0;
 else
  VAR_3 = VAR_1->poll_nsec / 1000;

 return FUNC_0(VAR_2, "%d\n", VAR_3);
}
