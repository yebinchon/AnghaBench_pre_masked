
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dummy; } ;
typedef int ssize_t ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct request_queue*,unsigned long) ;
 int FUNC_1 (struct request_queue*) ;
 int FUNC_2 (unsigned long*,char const*,size_t) ;

__attribute__((used)) static ssize_t
FUNC_3(struct request_queue *VAR_2, const char *VAR_3, size_t VAR_4)
{
 unsigned long VAR_5;
 int VAR_6, VAR_7;

 if (!FUNC_1(VAR_2))
  return -VAR_1;

 VAR_6 = FUNC_2(&VAR_5, VAR_3, VAR_4);
 if (VAR_6 < 0)
  return VAR_6;

 if (VAR_5 < VAR_0)
  VAR_5 = VAR_0;

 VAR_7 = FUNC_0(VAR_2, VAR_5);
 if (VAR_7)
  return VAR_7;

 return VAR_6;
}
