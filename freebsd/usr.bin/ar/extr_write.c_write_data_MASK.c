
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bsdar {int dummy; } ;
struct archive {int dummy; } ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct archive*) ;
 int FUNC_1 (struct archive*) ;
 scalar_t__ FUNC_2 (struct archive*,void const*,size_t) ;
 int FUNC_3 (struct bsdar*,int ,int ,char*,int ) ;
 int FUNC_4 (void const*,size_t) ;

__attribute__((used)) static void
FUNC_5(struct bsdar *VAR_1, struct archive *VAR_2, const void *VAR_3, size_t VAR_4)
{
 ssize_t VAR_5;

 FUNC_4(VAR_3, VAR_4);
 while (VAR_4 > 0) {
  VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_4);
  if (VAR_5 < 0)
   FUNC_3(VAR_1, VAR_0, FUNC_0(VAR_2), "%s",
       FUNC_1(VAR_2));
  VAR_3 = (const char *)VAR_3 + VAR_5;
  VAR_4 -= VAR_5;
 }
}
