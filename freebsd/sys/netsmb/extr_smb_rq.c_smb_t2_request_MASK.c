
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_t2rq {int t2_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct smb_t2rq*) ;

int
FUNC_1(struct smb_t2rq *VAR_5)
{
 int VAR_6 = VAR_0, VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  VAR_5->t2_flags &= ~VAR_1;
  VAR_6 = FUNC_0(VAR_5);
  if (VAR_6 == 0)
   break;
  if ((VAR_5->t2_flags & (VAR_3 | VAR_2)) != VAR_3)
   break;
 }
 return VAR_6;
}
