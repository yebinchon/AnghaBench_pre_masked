
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct signature_check {int result; char* signer; } ;
struct TYPE_2__ {int oid; } ;
struct commit {TYPE_1__ object; } ;
typedef int signature_check ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (struct commit*,struct signature_check*) ;
 int FUNC_2 (char*,char*,...) ;
 int FUNC_3 (char*,int *,int ) ;
 int FUNC_4 (struct signature_check*,int ,int) ;
 int FUNC_5 (char*,char*,char*) ;
 int FUNC_6 (struct signature_check*) ;

void FUNC_7(struct commit *VAR_2, int VAR_3)
{
 char VAR_4[VAR_1 + 1];
 struct signature_check VAR_5;
 FUNC_4(&VAR_5, 0, sizeof(VAR_5));

 FUNC_1(VAR_2, &VAR_5);

 FUNC_3(VAR_4, &VAR_2->object.oid, VAR_0);
 switch (VAR_5.result) {
 case 'G':
  break;
 case 'U':
  FUNC_2(FUNC_0("Commit %s has an untrusted GPG signature, "
        "allegedly by %s."), VAR_4, VAR_5.signer);
 case 'B':
  FUNC_2(FUNC_0("Commit %s has a bad GPG signature "
        "allegedly by %s."), VAR_4, VAR_5.signer);
 default:
  FUNC_2(FUNC_0("Commit %s does not have a GPG signature."), VAR_4);
 }
 if (VAR_3 >= 0 && VAR_5.result == 'G')
  FUNC_5(FUNC_0("Commit %s has a good GPG signature by %s\n"),
         VAR_4, VAR_5.signer);

 FUNC_6(&VAR_5);
}
