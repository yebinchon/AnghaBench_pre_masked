
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ val; } ;
struct TYPE_9__ {TYPE_1__ cancelled; } ;
typedef TYPE_2__ transport_smart ;
struct git_odb_writepack {scalar_t__ (* append ) (struct git_odb_writepack*,int ,int ,int *) ;scalar_t__ (* commit ) (struct git_odb_writepack*,int *) ;} ;
struct TYPE_10__ {int offset; int data; } ;
typedef TYPE_3__ gitno_buffer ;
typedef int git_indexer_progress ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (struct git_odb_writepack*,int ,int ,int *) ;
 scalar_t__ FUNC_4 (struct git_odb_writepack*,int *) ;

__attribute__((used)) static int FUNC_5(transport_smart *VAR_2, struct git_odb_writepack *VAR_3, gitno_buffer *VAR_4, git_indexer_progress *VAR_5)
{
 int VAR_6;

 do {
  if (VAR_2->cancelled.val) {
   FUNC_0(VAR_0, "The fetch was cancelled by the user");
   return VAR_1;
  }

  if (VAR_3->append(VAR_3, VAR_4->data, VAR_4->offset, VAR_5) < 0)
   return -1;

  FUNC_1(VAR_4, VAR_4->offset);

  if ((VAR_6 = FUNC_2(VAR_4)) < 0)
   return VAR_6;
 } while(VAR_6 > 0);

 if (VAR_3->commit(VAR_3, VAR_5) < 0)
  return -1;

 return 0;
}
