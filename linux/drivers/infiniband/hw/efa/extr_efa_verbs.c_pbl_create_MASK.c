
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pbl_context {int pbl_buf_size_in_bytes; int physically_continuous; int pbl_buf; } ;
struct ib_umem {int dummy; } ;
struct efa_dev {int ibdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (struct efa_dev*,struct pbl_context*) ;
 int FUNC_5 (struct efa_dev*,struct pbl_context*) ;
 int FUNC_6 (struct efa_dev*,struct ib_umem*,int ,int,int ) ;

__attribute__((used)) static int FUNC_7(struct efa_dev *VAR_3,
        struct pbl_context *VAR_4,
        struct ib_umem *VAR_5,
        int VAR_6,
        u8 VAR_7)
{
 int VAR_8;

 VAR_4->pbl_buf_size_in_bytes = VAR_6 * VAR_0;
 VAR_4->pbl_buf = FUNC_3(VAR_4->pbl_buf_size_in_bytes, VAR_2);
 if (!VAR_4->pbl_buf)
  return -VAR_1;

 if (FUNC_1(VAR_4->pbl_buf)) {
  VAR_4->physically_continuous = 0;
  VAR_8 = FUNC_6(VAR_3, VAR_5, VAR_4->pbl_buf, VAR_6,
     VAR_7);
  if (VAR_8)
   goto err_free;

  VAR_8 = FUNC_5(VAR_3, VAR_4);
  if (VAR_8)
   goto err_free;
 } else {
  VAR_4->physically_continuous = 1;
  VAR_8 = FUNC_6(VAR_3, VAR_5, VAR_4->pbl_buf, VAR_6,
     VAR_7);
  if (VAR_8)
   goto err_free;

  VAR_8 = FUNC_4(VAR_3, VAR_4);
  if (VAR_8)
   goto err_free;
 }

 FUNC_0(&VAR_3->ibdev,
    "user_pbl_created: user_pages[%u], continuous[%u]\n",
    VAR_6, VAR_4->physically_continuous);

 return 0;

err_free:
 FUNC_2(VAR_4->pbl_buf);
 return VAR_8;
}
