
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_2__ {int cylinders; } ;
struct vhd_footer {int checksum; int id; int disk_type; TYPE_1__ geometry; int current_size; int original_size; int creator_os; int creator_version; int creator_tool; int timestamp; int data_offset; int version; int features; int cookie; } ;
typedef int mkimg_uuid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct vhd_footer*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (struct vhd_footer*,int) ;
 int FUNC_7 (int ,TYPE_1__*) ;
 int FUNC_8 () ;

__attribute__((used)) static void
FUNC_9(struct vhd_footer *VAR_6, uint64_t VAR_7,
    uint32_t VAR_8, uint64_t VAR_9)
{
 mkimg_uuid_t VAR_10;

 FUNC_3(VAR_6, 0, sizeof(*VAR_6));
 FUNC_2(&VAR_6->cookie, VAR_4);
 FUNC_1(&VAR_6->features, VAR_3);
 FUNC_1(&VAR_6->version, VAR_5);
 FUNC_2(&VAR_6->data_offset, VAR_9);
 FUNC_1(&VAR_6->timestamp, FUNC_8());
 FUNC_1(&VAR_6->creator_tool, VAR_1);
 FUNC_1(&VAR_6->creator_version, VAR_2);
 FUNC_1(&VAR_6->creator_os, VAR_0);
 FUNC_2(&VAR_6->original_size, VAR_7);
 FUNC_2(&VAR_6->current_size, VAR_7);
 FUNC_7(VAR_7, &VAR_6->geometry);
 FUNC_0(&VAR_6->geometry.cylinders, VAR_6->geometry.cylinders);
 FUNC_1(&VAR_6->disk_type, VAR_8);
 FUNC_4(&VAR_10);
 FUNC_5(&VAR_6->id, &VAR_10);
 FUNC_1(&VAR_6->checksum, FUNC_6(VAR_6, sizeof(*VAR_6)));
}
