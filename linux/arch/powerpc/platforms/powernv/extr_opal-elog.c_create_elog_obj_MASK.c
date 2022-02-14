
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef void* uint64_t ;
struct TYPE_10__ {int kset; } ;
struct TYPE_9__ {char* name; int mode; } ;
struct TYPE_11__ {size_t size; int read; TYPE_1__ attr; } ;
struct elog_obj {size_t size; TYPE_2__ kobj; TYPE_3__ raw_attr; int * buffer; void* id; void* type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,int *,char*,void*) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 void* FUNC_6 (int,int ) ;
 int FUNC_7 (int ,int,void*) ;
 int FUNC_8 (char*,void*) ;
 int VAR_5 ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_2__*,TYPE_3__*) ;

__attribute__((used)) static struct elog_obj *FUNC_11(uint64_t VAR_6, size_t VAR_7, uint64_t VAR_8)
{
 struct elog_obj *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_6(sizeof(*VAR_9), VAR_0);
 if (!VAR_9)
  return ((void*)0);

 VAR_9->kobj.kset = VAR_3;

 FUNC_3(&VAR_9->kobj, &VAR_4);

 FUNC_9(&VAR_9->raw_attr);

 VAR_9->raw_attr.attr.name = "raw";
 VAR_9->raw_attr.attr.mode = 0400;
 VAR_9->raw_attr.size = VAR_7;
 VAR_9->raw_attr.read = VAR_5;

 VAR_9->id = VAR_6;
 VAR_9->size = VAR_7;
 VAR_9->type = VAR_8;

 VAR_9->buffer = FUNC_6(VAR_9->size, VAR_0);

 if (VAR_9->buffer) {
  VAR_10 = FUNC_7(FUNC_0(VAR_9->buffer),
      VAR_9->size, VAR_9->id);
  if (VAR_10 != VAR_2) {
   FUNC_8("ELOG: log read failed for log-id=%llx\n",
          VAR_9->id);
   FUNC_1(VAR_9->buffer);
   VAR_9->buffer = ((void*)0);
  }
 }

 VAR_10 = FUNC_2(&VAR_9->kobj, ((void*)0), "0x%llx", VAR_6);
 if (VAR_10) {
  FUNC_4(&VAR_9->kobj);
  return ((void*)0);
 }

 VAR_10 = FUNC_10(&VAR_9->kobj, &VAR_9->raw_attr);
 if (VAR_10) {
  FUNC_4(&VAR_9->kobj);
  return ((void*)0);
 }

 FUNC_5(&VAR_9->kobj, VAR_1);

 return VAR_9;
}
