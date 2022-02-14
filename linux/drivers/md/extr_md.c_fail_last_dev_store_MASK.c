
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {int fail_last_dev; } ;
typedef int ssize_t ;


 int FUNC_0 (char const*,int*) ;

__attribute__((used)) static ssize_t
FUNC_1(struct mddev *VAR_0, const char *VAR_1, size_t VAR_2)
{
 int VAR_3;
 bool VAR_4;

 VAR_3 = FUNC_0(VAR_1, &VAR_4);
 if (VAR_3)
  return VAR_3;

 if (VAR_4 != VAR_0->fail_last_dev)
  VAR_0->fail_last_dev = VAR_4;

 return VAR_2;
}
