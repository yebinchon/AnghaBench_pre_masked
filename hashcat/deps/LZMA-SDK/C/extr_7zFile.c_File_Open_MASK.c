
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WRes ;
struct TYPE_3__ {scalar_t__ handle; scalar_t__ file; } ;
typedef TYPE_1__ CSzFile ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int ,int ,int *,int ,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 () ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (char const*,char*) ;

__attribute__((used)) static WRes FUNC_3(CSzFile *VAR_8, const char *VAR_9, int VAR_10)
{
  VAR_8->file = FUNC_2(VAR_9, VAR_10 ? "wb+" : "rb");
  return (VAR_8->file != 0) ? 0 :



    VAR_7;


}
