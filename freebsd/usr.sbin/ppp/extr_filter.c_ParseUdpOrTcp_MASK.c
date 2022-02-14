
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct protoent {scalar_t__ p_proto; int p_name; } ;
struct filterent {scalar_t__ f_srcop; scalar_t__ f_dstop; int f_estab; int f_syn; int f_finrst; scalar_t__ f_srcport; scalar_t__ f_dstport; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_0 (char const* const,int ) ;
 void* FUNC_1 (char const* const) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (char const* const,char*) ;

__attribute__((used)) static int
FUNC_4(int VAR_3, char const *const *VAR_4, const struct protoent *VAR_5,
              struct filterent *VAR_6)
{
  VAR_6->f_srcop = VAR_6->f_dstop = VAR_2;
  VAR_6->f_estab = VAR_6->f_syn = VAR_6->f_finrst = 0;

  if (VAR_3 >= 3 && !FUNC_3(*VAR_4, "src")) {
    VAR_6->f_srcop = FUNC_1(VAR_4[1]);
    if (VAR_6->f_srcop == VAR_2) {
      FUNC_2(VAR_1, "ParseUdpOrTcp: bad operator\n");
      return 0;
    }
    if (VAR_5 == ((void*)0))
      return 0;
    VAR_6->f_srcport = FUNC_0(VAR_4[2], VAR_5->p_name);
    if (VAR_6->f_srcport == 0)
      return 0;
    VAR_3 -= 3;
    VAR_4 += 3;
  }

  if (VAR_3 >= 3 && !FUNC_3(VAR_4[0], "dst")) {
    VAR_6->f_dstop = FUNC_1(VAR_4[1]);
    if (VAR_6->f_dstop == VAR_2) {
      FUNC_2(VAR_1, "ParseUdpOrTcp: bad operator\n");
      return 0;
    }
    if (VAR_5 == ((void*)0))
      return 0;
    VAR_6->f_dstport = FUNC_0(VAR_4[2], VAR_5->p_name);
    if (VAR_6->f_dstport == 0)
      return 0;
    VAR_3 -= 3;
    VAR_4 += 3;
  }

  if (VAR_5 && VAR_5->p_proto == VAR_0) {
    for (; VAR_3 > 0; VAR_3--, VAR_4++)
      if (!FUNC_3(*VAR_4, "estab"))
        VAR_6->f_estab = 1;
      else if (!FUNC_3(*VAR_4, "syn"))
        VAR_6->f_syn = 1;
      else if (!FUNC_3(*VAR_4, "finrst"))
        VAR_6->f_finrst = 1;
      else
        break;
  }

  if (VAR_3 > 0) {
    FUNC_2(VAR_1, "ParseUdpOrTcp: bad src/dst port syntax: %s\n", *VAR_4);
    return 0;
  }

  return 1;
}
