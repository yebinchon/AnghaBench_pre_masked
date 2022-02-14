
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* my_dest_ptr ;
typedef TYPE_2__* j_compress_ptr ;
typedef int boolean ;
struct TYPE_8__ {int (* Error ) (int ,char*,int ) ;} ;
struct TYPE_7__ {int dest; } ;
struct TYPE_6__ {int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_3__ VAR_2 ;
 int FUNC_1 (int ,char*,int ) ;

__attribute__((used)) static boolean
FUNC_2 (j_compress_ptr VAR_3)
{
  my_dest_ptr VAR_4 = (my_dest_ptr) VAR_3->dest;

  FUNC_0(VAR_3);


  VAR_2.Error(VAR_0, "Output buffer for encoded JPEG image has insufficient size of %d bytes",
           VAR_4->size);

  return VAR_1;
}
