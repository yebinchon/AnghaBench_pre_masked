
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mpt_cfg_page_req {int len; int ioc_status; void* buf; } ;
typedef int req ;
typedef int U16 ;
struct TYPE_2__ {int PageLength; } ;
typedef TYPE_1__ CONFIG_PAGE_HEADER ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct mpt_cfg_page_req*,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int,int ,struct mpt_cfg_page_req*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ) ;

int
FUNC_5(int VAR_4, void *VAR_5, U16 *VAR_6)
{
 CONFIG_PAGE_HEADER *VAR_7;
 struct mpt_cfg_page_req VAR_8;

 if (VAR_6 != ((void*)0))
  *VAR_6 = VAR_1;
 FUNC_1(&VAR_8, sizeof(VAR_8));
 VAR_8.buf = VAR_5;
 VAR_7 = VAR_5;
 VAR_8.len = VAR_7->PageLength * 4;
 if (FUNC_2(VAR_4, VAR_2, &VAR_8) < 0)
  return (VAR_3);
 if (!FUNC_0(VAR_8.ioc_status)) {
  if (VAR_6 != ((void*)0)) {
   *VAR_6 = VAR_8.ioc_status;
   return (0);
  }
  FUNC_4("Writing config page failed: %s",
      FUNC_3(VAR_8.ioc_status));
  return (VAR_0);
 }
 return (0);
}
