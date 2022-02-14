
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int imagesize; int flags; int guid; } ;
struct capsule_info {void* phys; void* pages; int reset_type; TYPE_1__ header; int total_size; } ;
typedef int phys_addr_t ;


 size_t FUNC_0 (int ,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ,int *) ;
 void* FUNC_2 (void*,size_t,int) ;
 int FUNC_3 (char*) ;

int FUNC_4(struct capsule_info *VAR_5)
{
 size_t VAR_6;
 int VAR_7;
 void *VAR_8;

 VAR_6 = FUNC_0(VAR_5->total_size, VAR_3) / VAR_3;

 if (VAR_6 == 0) {
  FUNC_3("invalid capsule size\n");
  return -VAR_0;
 }


 VAR_7 = FUNC_1(VAR_5->header.guid,
        VAR_5->header.flags,
        VAR_5->header.imagesize,
        &VAR_5->reset_type);
 if (VAR_7) {
  FUNC_3("capsule not supported\n");
  return VAR_7;
 }

 VAR_8 = FUNC_2(VAR_5->pages,
        VAR_6 * sizeof(void *),
        VAR_2 | VAR_4);
 if (!VAR_8)
  return -VAR_1;

 VAR_5->pages = VAR_8;

 VAR_8 = FUNC_2(VAR_5->phys,
        VAR_6 * sizeof(phys_addr_t *),
        VAR_2 | VAR_4);
 if (!VAR_8)
  return -VAR_1;

 VAR_5->phys = VAR_8;

 return 0;
}
