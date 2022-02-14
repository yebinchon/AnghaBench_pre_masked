
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tp_entry {int status; int port_no; } ;
struct ifbareq {int ifba_flags; int ifba_ifsname; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct ifbareq *VAR_4, struct tp_entry *VAR_5)
{
 VAR_5->port_no = FUNC_0(VAR_4->ifba_ifsname);

 if ((VAR_4->ifba_flags & VAR_1) == VAR_0)
  VAR_5->status = VAR_3;
 else
  VAR_5->status = VAR_2;
}
