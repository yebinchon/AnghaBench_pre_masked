
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ re_nsub; } ;
typedef TYPE_1__ regex_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_2 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (TYPE_1__*,char*,int) ;
 int VAR_4 ;
 int FUNC_4 (int,TYPE_1__*) ;

__attribute__((used)) static regex_t *
FUNC_5(char *VAR_5, int VAR_6)
{
 regex_t *VAR_7;
 int VAR_8, VAR_9;


 VAR_9 = VAR_4;
 if (VAR_6)
  VAR_9 |= VAR_0;
 if ((VAR_7 = FUNC_2(sizeof(regex_t))) == ((void*)0))
  FUNC_0(1, "malloc");
 if ((VAR_8 = FUNC_3(VAR_7, VAR_5, VAR_9)) != 0)
  FUNC_1(1, "%lu: %s: RE error: %s",
    VAR_2, VAR_1, FUNC_4(VAR_8, VAR_7));
 if (VAR_3 < VAR_7->re_nsub)
  VAR_3 = VAR_7->re_nsub;
 return (VAR_7);
}
