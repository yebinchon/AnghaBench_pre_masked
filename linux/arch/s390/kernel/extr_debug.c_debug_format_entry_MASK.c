
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct debug_view {scalar_t__ (* format_proc ) (TYPE_3__*,struct debug_view*,scalar_t__,int ) ;scalar_t__ (* header_proc ) (TYPE_3__*,struct debug_view*,size_t,TYPE_4__*,scalar_t__) ;scalar_t__ (* prolog_proc ) (TYPE_3__*,struct debug_view*,scalar_t__) ;} ;
struct TYPE_12__ {size_t act_area; size_t act_page; scalar_t__ temp_buf; int act_entry; struct debug_view* view; TYPE_3__* debug_info_snap; } ;
typedef TYPE_2__ file_private_info_t ;
struct TYPE_13__ {scalar_t__** areas; } ;
typedef TYPE_3__ debug_info_t ;
struct TYPE_11__ {long long stck; } ;
struct TYPE_14__ {TYPE_1__ id; } ;
typedef TYPE_4__ debug_entry_t ;


 int FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_3__*,struct debug_view*,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_3__*,struct debug_view*,size_t,TYPE_4__*,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_3__*,struct debug_view*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_4(file_private_info_t *VAR_1)
{
 debug_info_t *VAR_2 = VAR_1->debug_info_snap;
 struct debug_view *VAR_3 = VAR_1->view;
 debug_entry_t *VAR_4;
 size_t VAR_5 = 0;

 if (VAR_1->act_entry == VAR_0) {

  if (VAR_3->prolog_proc)
   VAR_5 += VAR_3->prolog_proc(VAR_2, VAR_3, VAR_1->temp_buf);
  goto out;
 }
 if (!VAR_2->areas)
  goto out;
 VAR_4 = (debug_entry_t *) ((char *)VAR_2->areas[VAR_1->act_area]
           [VAR_1->act_page] + VAR_1->act_entry);

 if (VAR_4->id.stck == 0LL)
  goto out;
 if (VAR_3->header_proc)
  VAR_5 += VAR_3->header_proc(VAR_2, VAR_3, VAR_1->act_area,
      VAR_4, VAR_1->temp_buf + VAR_5);
 if (VAR_3->format_proc)
  VAR_5 += VAR_3->format_proc(VAR_2, VAR_3, VAR_1->temp_buf + VAR_5,
      FUNC_0(VAR_4));
out:
 return VAR_5;
}
