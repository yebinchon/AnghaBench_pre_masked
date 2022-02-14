
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct OpalIoP7IOCErrorData {scalar_t__ lemWof; scalar_t__ lemAction1; scalar_t__ lemAction0; scalar_t__ lemErrMask; scalar_t__ lemFir; scalar_t__ gemRwof; scalar_t__ gemMask; scalar_t__ gemRirqfir; scalar_t__ gemRfir; scalar_t__ gemXfir; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct OpalIoP7IOCErrorData *VAR_0)
{

 if (VAR_0->gemXfir || VAR_0->gemRfir ||
     VAR_0->gemRirqfir || VAR_0->gemMask || VAR_0->gemRwof)
  FUNC_1("  GEM: %016llx %016llx %016llx %016llx %016llx\n",
   FUNC_0(VAR_0->gemXfir),
   FUNC_0(VAR_0->gemRfir),
   FUNC_0(VAR_0->gemRirqfir),
   FUNC_0(VAR_0->gemMask),
   FUNC_0(VAR_0->gemRwof));


 if (VAR_0->lemFir || VAR_0->lemErrMask ||
     VAR_0->lemAction0 || VAR_0->lemAction1 || VAR_0->lemWof)
  FUNC_1("  LEM: %016llx %016llx %016llx %016llx %016llx\n",
   FUNC_0(VAR_0->lemFir),
   FUNC_0(VAR_0->lemErrMask),
   FUNC_0(VAR_0->lemAction0),
   FUNC_0(VAR_0->lemAction1),
   FUNC_0(VAR_0->lemWof));
}
