
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tentry_info {int * ptv; } ;
struct table_algo {size_t ta_buf_size; int (* flush_entry ) (struct ip_fw_chain*,struct tentry_info*,int *) ;} ;
struct ip_fw_chain {int dummy; } ;
typedef int * caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct ip_fw_chain*,struct tentry_info*,int *) ;
 int FUNC_2 (struct ip_fw_chain*,struct tentry_info*,int *) ;

__attribute__((used)) static void
FUNC_3(struct ip_fw_chain *VAR_2, struct table_algo *VAR_3,
    struct tentry_info *VAR_4, uint32_t VAR_5, int VAR_6,
    caddr_t VAR_7, caddr_t VAR_8)
{
 caddr_t VAR_9;
 struct tentry_info *VAR_10;
 size_t VAR_11;
 int VAR_12;

 VAR_11 = VAR_3->ta_buf_size;


 VAR_9 = VAR_7;
 for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++, VAR_9 += VAR_11) {
  VAR_10 = &VAR_4[VAR_12];
  VAR_3->flush_entry(VAR_2, VAR_10, VAR_9);
  if (VAR_10->ptv != ((void*)0)) {
   FUNC_0(VAR_10->ptv, VAR_0);
   VAR_10->ptv = ((void*)0);
  }
 }


 if (VAR_6 != 0) {
  VAR_9 = VAR_7 + VAR_5 * VAR_11;
  for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++, VAR_9 += VAR_11)
   VAR_3->flush_entry(VAR_2, &VAR_4[VAR_12], VAR_9);
 }

 if (VAR_7 != VAR_8)
  FUNC_0(VAR_7, VAR_1);
}
