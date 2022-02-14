
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct fw_header {int dummy; } ;
struct TYPE_10__ {int * layout_id; int hw_id; } ;
struct TYPE_9__ {int file_size; int * file_name; } ;
struct TYPE_8__ {int fw_max_len; } ;


 int FUNC_0 (char*,...) ;
 TYPE_5__* VAR_0 ;
 int * VAR_1 ;
 TYPE_5__* FUNC_1 (int *) ;
 TYPE_5__* FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int *) ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_1__* VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int FUNC_5 (int *,int *,int ) ;

__attribute__((used)) static int FUNC_6(void)
{
 int VAR_10;

 if (VAR_2.file_name == ((void*)0)) {
  FUNC_0("no firmware image specified");
  return -1;
 }

 VAR_10 = FUNC_4(&VAR_2);
 if (VAR_10)
  return VAR_10;

 if (VAR_5)
  return 0;

 if (VAR_1 == ((void*)0) && VAR_9 == ((void*)0)) {
  FUNC_0("either board or hardware id must be specified");
  return -1;
 }

 if (VAR_1) {
  VAR_0 = FUNC_1(VAR_1);
  if (VAR_0 == ((void*)0)) {
   FUNC_0("unknown/unsupported board id \"%s\"", VAR_1);
   return -1;
  }
  if (VAR_7 == ((void*)0)) {
   VAR_7 = VAR_0->layout_id;
  }
  VAR_4 = VAR_0->hw_id;
 } else {
  VAR_4 = FUNC_5(VAR_9, ((void*)0), 0);
  VAR_0 = FUNC_2(VAR_4);
  if (VAR_7 == ((void*)0)) {
   VAR_7 = VAR_0->layout_id;
  }
 }

 VAR_6 = FUNC_3(VAR_7);
 if (VAR_6 == ((void*)0)) {
  FUNC_0("unknown flash layout \"%s\"", VAR_7);
  return -1;
 }

 VAR_3 = VAR_2.file_size;

 if (VAR_2.file_size >
  VAR_6->fw_max_len - sizeof (struct fw_header)) {
  FUNC_0("firmware image is too big");
  return -1;
 }

 if (VAR_8 == ((void*)0)) {
  FUNC_0("no output file specified");
  return -1;
 }
 return 0;
}
