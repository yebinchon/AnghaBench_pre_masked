
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {int bitmap; } ;
typedef int ssize_t ;


 int FUNC_0 (char) ;
 int FUNC_1 (int ,unsigned long,unsigned long) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mddev*) ;
 int FUNC_4 (struct mddev*) ;
 unsigned long FUNC_5 (char const*,char**,int ) ;
 char* FUNC_6 (char*) ;

__attribute__((used)) static ssize_t
FUNC_7(struct mddev *VAR_0, const char *VAR_1, size_t VAR_2)
{
 char *VAR_3;
 unsigned long VAR_4, VAR_5;
 int VAR_6;

 VAR_6 = FUNC_3(VAR_0);
 if (VAR_6)
  return VAR_6;
 if (!VAR_0->bitmap)
  goto out;

 while (*VAR_1) {
  VAR_4 = VAR_5 = FUNC_5(VAR_1, &VAR_3, 0);
  if (VAR_1 == VAR_3) break;
  if (*VAR_3 == '-') {
   VAR_1 = VAR_3 + 1;
   VAR_5 = FUNC_5(VAR_1, &VAR_3, 0);
   if (VAR_1 == VAR_3) break;
  }
  if (*VAR_3 && !FUNC_0(*VAR_3)) break;
  FUNC_1(VAR_0->bitmap, VAR_4, VAR_5);
  VAR_1 = FUNC_6(VAR_3);
 }
 FUNC_2(VAR_0->bitmap);
out:
 FUNC_4(VAR_0);
 return VAR_2;
}
