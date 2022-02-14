
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct bbr_sendmap {int r_flags; scalar_t__ r_end; scalar_t__ r_start; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 struct bbr_sendmap* FUNC_2 (struct bbr_sendmap*,int ) ;
 struct bbr_sendmap* FUNC_3 (struct bbr_sendmap*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_4(struct bbr_sendmap *VAR_3,
    uint32_t VAR_4, uint32_t VAR_5)
{
 struct bbr_sendmap *VAR_6;
 struct bbr_sendmap *VAR_7;


 VAR_6 = FUNC_3(VAR_3, VAR_1, VAR_2);
 VAR_7 = FUNC_2(VAR_3, VAR_2);
 if (VAR_6 && (VAR_6->r_flags & VAR_0)) {

  if ((VAR_6->r_end == VAR_4) ||
      (FUNC_1(VAR_4, VAR_6->r_end) &&
       FUNC_0(VAR_5, VAR_6->r_end))) {







       return (1);
      }
 }
 if (VAR_7 && (VAR_7->r_flags & VAR_0)) {

  if ((VAR_7->r_start == VAR_5) ||
      (FUNC_1(VAR_4, VAR_7->r_start) &&
       FUNC_0(VAR_5, VAR_7->r_start))) {







   return (1);
  }
 }
 return (0);
}
