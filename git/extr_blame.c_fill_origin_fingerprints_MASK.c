
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fingerprint {int dummy; } ;
struct TYPE_2__ {int ptr; int size; } ;
struct blame_origin {int num_lines; TYPE_1__ file; scalar_t__ fingerprints; } ;


 int FUNC_0 (int**,int ,int ) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (scalar_t__,int ,int*,int ,int ) ;
 scalar_t__ FUNC_3 (int,int ) ;

__attribute__((used)) static void FUNC_4(struct blame_origin *VAR_0)
{
 int *VAR_1;

 if (VAR_0->fingerprints)
  return;
 VAR_0->num_lines = FUNC_0(&VAR_1, VAR_0->file.ptr,
     VAR_0->file.size);
 VAR_0->fingerprints = FUNC_3(sizeof(struct fingerprint), VAR_0->num_lines);
 FUNC_2(VAR_0->fingerprints, VAR_0->file.ptr, VAR_1,
         0, VAR_0->num_lines);
 FUNC_1(VAR_1);
}
