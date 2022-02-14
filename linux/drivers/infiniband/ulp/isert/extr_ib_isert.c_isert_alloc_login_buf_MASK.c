
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isert_conn {void* login_req_buf; void* login_req_dma; void* login_rsp_buf; void* login_rsp_dma; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (struct ib_device*,void*,int,int ) ;
 int FUNC_1 (struct ib_device*,void*) ;
 int FUNC_2 (struct ib_device*,void*,int,int ) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (void*) ;
 void* FUNC_5 (int,int ) ;

__attribute__((used)) static int
FUNC_6(struct isert_conn *VAR_5,
        struct ib_device *VAR_6)
{
 int VAR_7;

 VAR_5->login_req_buf = FUNC_5(sizeof(*VAR_5->login_req_buf),
   VAR_3);
 if (!VAR_5->login_req_buf)
  return -VAR_2;

 VAR_5->login_req_dma = FUNC_0(VAR_6,
    VAR_5->login_req_buf,
    VAR_4, VAR_0);
 VAR_7 = FUNC_1(VAR_6, VAR_5->login_req_dma);
 if (VAR_7) {
  FUNC_3("login_req_dma mapping error: %d\n", VAR_7);
  VAR_5->login_req_dma = 0;
  goto out_free_login_req_buf;
 }

 VAR_5->login_rsp_buf = FUNC_5(VAR_4, VAR_3);
 if (!VAR_5->login_rsp_buf) {
  VAR_7 = -VAR_2;
  goto out_unmap_login_req_buf;
 }

 VAR_5->login_rsp_dma = FUNC_0(VAR_6,
     VAR_5->login_rsp_buf,
     VAR_4, VAR_1);
 VAR_7 = FUNC_1(VAR_6, VAR_5->login_rsp_dma);
 if (VAR_7) {
  FUNC_3("login_rsp_dma mapping error: %d\n", VAR_7);
  VAR_5->login_rsp_dma = 0;
  goto out_free_login_rsp_buf;
 }

 return 0;

out_free_login_rsp_buf:
 FUNC_4(VAR_5->login_rsp_buf);
out_unmap_login_req_buf:
 FUNC_2(VAR_6, VAR_5->login_req_dma,
       VAR_4, VAR_0);
out_free_login_req_buf:
 FUNC_4(VAR_5->login_req_buf);
 return VAR_7;
}
