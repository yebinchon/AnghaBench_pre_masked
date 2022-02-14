
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct protoent {int p_name; } ;
struct prompt {int dummy; } ;
struct filterent {scalar_t__ f_action; int f_proto; int timeout; scalar_t__ f_finrst; scalar_t__ f_syn; scalar_t__ f_estab; int f_dstport; scalar_t__ f_dstop; int f_srcport; scalar_t__ f_srcop; int f_dsttype; int f_dst; int f_srctype; int f_src; scalar_t__ f_invert; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 struct protoent* FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (struct prompt*,char*,...) ;

__attribute__((used)) static void
FUNC_6(struct filterent *VAR_2, struct prompt *VAR_3)
{
  struct protoent *VAR_4;
  int VAR_5;

  for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++, VAR_2++) {
    if (VAR_2->f_action != VAR_0) {
      FUNC_5(VAR_3, "  %2d %s", VAR_5, FUNC_1(VAR_2->f_action));
      FUNC_5(VAR_3, "%c ", VAR_2->f_invert ? '!' : ' ');

      if (FUNC_4(&VAR_2->f_src))
        FUNC_5(VAR_3, "%s ", FUNC_0(&VAR_2->f_src, VAR_2->f_srctype));
      else
        FUNC_5(VAR_3, "any ");

      if (FUNC_4(&VAR_2->f_dst))
        FUNC_5(VAR_3, "%s ", FUNC_0(&VAR_2->f_dst, VAR_2->f_dsttype));
      else
        FUNC_5(VAR_3, "any ");

      if (VAR_2->f_proto) {
        if ((VAR_4 = FUNC_3(VAR_2->f_proto)) == ((void*)0))
   FUNC_5(VAR_3, "P:%d", VAR_2->f_proto);
        else
   FUNC_5(VAR_3, "%s", VAR_4->p_name);

 if (VAR_2->f_srcop)
   FUNC_5(VAR_3, " src %s %d", FUNC_2(VAR_2->f_srcop),
    VAR_2->f_srcport);
 if (VAR_2->f_dstop)
   FUNC_5(VAR_3, " dst %s %d", FUNC_2(VAR_2->f_dstop),
    VAR_2->f_dstport);
 if (VAR_2->f_estab)
   FUNC_5(VAR_3, " estab");
 if (VAR_2->f_syn)
   FUNC_5(VAR_3, " syn");
 if (VAR_2->f_finrst)
   FUNC_5(VAR_3, " finrst");
      } else
 FUNC_5(VAR_3, "all");
      if (VAR_2->timeout != 0)
   FUNC_5(VAR_3, " timeout %u", VAR_2->timeout);
      FUNC_5(VAR_3, "\n");
    }
  }
}
