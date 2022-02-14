
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct knote {scalar_t__ kn_data; scalar_t__ kn_hook; } ;
struct audit_pipe {scalar_t__ ap_qlen; scalar_t__ ap_qoffset; scalar_t__ ap_qbyteslen; } ;


 int FUNC_0 (struct audit_pipe*) ;

__attribute__((used)) static int
FUNC_1(struct knote *VAR_0, long VAR_1)
{
 struct audit_pipe *VAR_2;

 VAR_2 = (struct audit_pipe *)VAR_0->kn_hook;
 FUNC_0(VAR_2);

 if (VAR_2->ap_qlen != 0) {
  VAR_0->kn_data = VAR_2->ap_qbyteslen - VAR_2->ap_qoffset;
  return (1);
 } else {
  VAR_0->kn_data = 0;
  return (0);
 }
}
