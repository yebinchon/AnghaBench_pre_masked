
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ other_case; int caseset; } ;
typedef TYPE_1__ ucd_record ;
typedef scalar_t__ pcre_uint32 ;
struct TYPE_7__ {scalar_t__ start_subject; scalar_t__* offset_vector; scalar_t__ end_subject; int lcc; scalar_t__ utf; } ;
typedef TYPE_2__ match_data ;
typedef scalar_t__ PCRE_PUCHAR ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 TYPE_1__* FUNC_1 (scalar_t__) ;
 scalar_t__* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (scalar_t__,int ,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__,int,int ,TYPE_2__*) ;
 int FUNC_7 (char*) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_8(int VAR_3, register PCRE_PUCHAR VAR_4, int VAR_5, match_data *VAR_6,
  BOOL VAR_7)
{
PCRE_PUCHAR VAR_8 = VAR_4;
register PCRE_PUCHAR VAR_9 = VAR_6->start_subject + VAR_6->offset_vector[VAR_3];
if (VAR_5 < 0) return -1;





if (VAR_7)
  {
    {
    while (VAR_5-- > 0)
      {
      pcre_uint32 VAR_10, VAR_11;
      if (VAR_4 >= VAR_6->end_subject) return -2;
      VAR_10 = FUNC_5(VAR_4);
      VAR_11 = FUNC_5(VAR_9);
      if (FUNC_3(VAR_11, VAR_6->lcc, VAR_11) != FUNC_3(VAR_10, VAR_6->lcc, VAR_10)) return -1;
      VAR_9++;
      VAR_4++;
      }
    }
  }




else
  {
  while (VAR_5-- > 0)
    {
    if (VAR_4 >= VAR_6->end_subject) return -2;
    if (FUNC_4(VAR_9) != FUNC_4(VAR_4)) return -1;
    }
  }

return (int)(VAR_4 - VAR_8);
}
