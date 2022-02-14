
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int mode_t ;
struct TYPE_6__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,char const*,char const*) ;
 int FUNC_4 (int ,char*,char const*) ;
 scalar_t__ FUNC_5 (int ,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,int,int ) ;
 int FUNC_8 (int,char const*,int ) ;
 int FUNC_9 (char const*) ;

__attribute__((used)) static int FUNC_10(
 const char *VAR_8,
 bool VAR_9,
 const char *VAR_10,
 mode_t VAR_11,
 bool VAR_12,
 const char *VAR_13)
{
 git_buf VAR_14 = VAR_1;
 int VAR_15, VAR_16 = 0, VAR_17;

 if (FUNC_3(&VAR_14, VAR_8, VAR_10) < 0)
  return -1;

 if (VAR_9)
  VAR_17 = VAR_6 | VAR_3 | VAR_5;
 else
  VAR_17 = VAR_6 | VAR_3 | VAR_4;

 VAR_15 = FUNC_7(FUNC_1(&VAR_14), VAR_17, VAR_11);

 if (VAR_15 >= 0) {
  VAR_16 = FUNC_8(VAR_15, VAR_13, FUNC_9(VAR_13));

  FUNC_6(VAR_15);
 }
 else if (VAR_7 != VAR_0)
  VAR_16 = VAR_15;







 FUNC_0(VAR_12);


 FUNC_2(&VAR_14);

 if (VAR_16)
  FUNC_4(VAR_2,
   "failed to initialize repository with template '%s'", VAR_10);

 return VAR_16;
}
