
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int PageLength; void* PageNumber; void* PageType; } ;
struct mpt_cfg_page_req {int len; int ioc_status; TYPE_1__ header; void* buf; int page_address; } ;
typedef int req ;
typedef void* U8 ;
typedef int U32 ;
typedef int U16 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,void*,int) ;
 int FUNC_2 (struct mpt_cfg_page_req*,int) ;
 int VAR_4 ;
 int FUNC_3 (void*) ;
 scalar_t__ FUNC_4 (int,int ,struct mpt_cfg_page_req*) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,int ) ;

void *
FUNC_8(int VAR_5, U8 VAR_6, U8 VAR_7, U32 VAR_8,
    U16 *VAR_9)
{
 struct mpt_cfg_page_req VAR_10;
 void *VAR_11;
 int VAR_12;

 if (VAR_9 != ((void*)0))
  *VAR_9 = VAR_1;
 FUNC_2(&VAR_10, sizeof(VAR_10));
 VAR_10.header.PageType = VAR_6;
 VAR_10.header.PageNumber = VAR_7;
 VAR_10.page_address = VAR_8;
 if (FUNC_4(VAR_5, VAR_2, &VAR_10) < 0)
  return (((void*)0));
 if (!FUNC_0(VAR_10.ioc_status)) {
  if (VAR_9 != ((void*)0))
   *VAR_9 = VAR_10.ioc_status;
  else
   FUNC_7("Reading config page header failed: %s",
       FUNC_6(VAR_10.ioc_status));
  VAR_4 = VAR_0;
  return (((void*)0));
 }
 VAR_10.len = VAR_10.header.PageLength * 4;
 VAR_11 = FUNC_5(VAR_10.len);
 VAR_10.buf = VAR_11;
 FUNC_1(&VAR_10.header, VAR_11, sizeof(VAR_10.header));
 if (FUNC_4(VAR_5, VAR_3, &VAR_10) < 0) {
  VAR_12 = VAR_4;
  FUNC_3(VAR_11);
  VAR_4 = VAR_12;
  return (((void*)0));
 }
 if (!FUNC_0(VAR_10.ioc_status)) {
  if (VAR_9 != ((void*)0))
   *VAR_9 = VAR_10.ioc_status;
  else
   FUNC_7("Reading config page failed: %s",
       FUNC_6(VAR_10.ioc_status));
  FUNC_3(VAR_11);
  VAR_4 = VAR_0;
  return (((void*)0));
 }
 return (VAR_11);
}
