
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct icp_qat_uclo_objhandle {int * uword_buf; TYPE_2__* ae_uimage; } ;
struct icp_qat_uclo_encap_page {unsigned int beg_addr_p; unsigned int micro_words_num; } ;
struct icp_qat_fw_loader_handle {struct icp_qat_uclo_objhandle* obj_handle; } ;
struct TYPE_4__ {TYPE_1__* img_ptr; } ;
struct TYPE_3__ {int fill_pattern; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (struct icp_qat_fw_loader_handle*,unsigned char,unsigned int,unsigned int,int *) ;
 int FUNC_2 (struct icp_qat_uclo_objhandle*,struct icp_qat_uclo_encap_page*,int *,unsigned int,unsigned int,int ) ;

__attribute__((used)) static void FUNC_3(struct icp_qat_fw_loader_handle *VAR_1,
     struct icp_qat_uclo_encap_page
     *VAR_2, unsigned int VAR_3)
{
 unsigned int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
 struct icp_qat_uclo_objhandle *VAR_9 = VAR_1->obj_handle;
 uint64_t VAR_10;



 FUNC_0(&VAR_10, VAR_9->ae_uimage[0].img_ptr->fill_pattern,
        sizeof(uint64_t));
 VAR_4 = VAR_2->beg_addr_p;
 VAR_5 = 0;
 VAR_7 = VAR_2->micro_words_num;
 while (VAR_7) {
  if (VAR_7 < VAR_0)
   VAR_8 = VAR_7;
  else
   VAR_8 = VAR_0;


  for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6++)
   FUNC_2(VAR_9, VAR_2,
          &VAR_9->uword_buf[VAR_6],
          VAR_4 + VAR_6,
          VAR_5 + VAR_6, VAR_10);


  FUNC_1(VAR_1, (unsigned char)VAR_3,
      VAR_4, VAR_8,
      VAR_9->uword_buf);

  VAR_4 += VAR_8;
  VAR_5 += VAR_8;
  VAR_7 -= VAR_8;
 }
}
