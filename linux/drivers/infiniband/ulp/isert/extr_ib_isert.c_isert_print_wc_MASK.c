
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_wc {scalar_t__ status; int vendor_err; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,char const*,int ,scalar_t__) ;
 int FUNC_2 (char*,char const*,int ,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_3(struct ib_wc *VAR_1, const char *VAR_2)
{
 if (VAR_1->status != VAR_0)
  FUNC_2("%s failure: %s (%d) vend_err %x\n", VAR_2,
     FUNC_0(VAR_1->status), VAR_1->status,
     VAR_1->vendor_err);
 else
  FUNC_1("%s failure: %s (%d)\n", VAR_2,
     FUNC_0(VAR_1->status), VAR_1->status);
}
