
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int size; scalar_t__ ptr; } ;
typedef TYPE_1__ git_buf ;
struct TYPE_7__ {char* message; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (unsigned char const*,int ) ;
 int FUNC_1 (int ,char*,char const*,char*) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_3__* FUNC_3 () ;
 scalar_t__ FUNC_4 (TYPE_1__*,char const*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_5(const char *VAR_2)
{
 git_buf VAR_3 = VAR_0;
 int VAR_4 = 0;

 if (FUNC_4(&VAR_3, VAR_2) < 0) {
  FUNC_1(VAR_1, "Failed to read %s: %s\n", VAR_2, FUNC_3()->message);
  VAR_4 = -1;
  goto exit;
 }

 FUNC_0((const unsigned char *)VAR_3.ptr, VAR_3.size);
exit:
 FUNC_2(&VAR_3);
 return VAR_4;
}
