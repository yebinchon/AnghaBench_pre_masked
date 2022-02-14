
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* PageNumber; void* PageType; } ;
struct mpt_cfg_page_req {TYPE_1__ header; int ioc_status; int page_address; } ;
typedef int req ;
typedef void* U8 ;
typedef int U32 ;
typedef int U16 ;
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
FUNC_5(int VAR_4, U8 VAR_5, U8 VAR_6, U32 VAR_7,
    CONFIG_PAGE_HEADER *VAR_8, U16 *VAR_9)
{
 struct mpt_cfg_page_req VAR_10;

 if (VAR_9 != ((void*)0))
  *VAR_9 = VAR_1;
 FUNC_1(&VAR_10, sizeof(VAR_10));
 VAR_10.header.PageType = VAR_5;
 VAR_10.header.PageNumber = VAR_6;
 VAR_10.page_address = VAR_7;
 if (FUNC_2(VAR_4, VAR_2, &VAR_10) < 0)
  return (VAR_3);
 if (!FUNC_0(VAR_10.ioc_status)) {
  if (VAR_9 != ((void*)0))
   *VAR_9 = VAR_10.ioc_status;
  else
   FUNC_4("Reading config page header failed: %s",
       FUNC_3(VAR_10.ioc_status));
  return (VAR_0);
 }
 *VAR_8 = VAR_10.header;
 return (0);
}
