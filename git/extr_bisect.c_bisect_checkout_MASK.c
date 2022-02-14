
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct object_id {int dummy; } ;
struct TYPE_2__ {scalar_t__ hexsz; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char** VAR_3 ;
 char** VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ,scalar_t__) ;
 int FUNC_2 (struct object_id const*) ;
 int FUNC_3 (char**,int ) ;
 TYPE_1__* VAR_5 ;
 int FUNC_4 (int *,char*,struct object_id const*,int *,int ,int ) ;

__attribute__((used)) static int FUNC_5(const struct object_id *VAR_6, int VAR_7)
{
 char VAR_8[VAR_0 + 1];

 FUNC_1(VAR_8, FUNC_2(VAR_6), VAR_5->hexsz + 1);
 FUNC_4(((void*)0), "BISECT_EXPECTED_REV", VAR_6, ((void*)0), 0, VAR_2);

 VAR_3[2] = VAR_8;
 if (VAR_7) {
  FUNC_4(((void*)0), "BISECT_HEAD", VAR_6, ((void*)0), 0,
      VAR_2);
 } else {
  int VAR_9;
  VAR_9 = FUNC_3(VAR_3, VAR_1);
  if (VAR_9)
   FUNC_0(VAR_9);
 }

 VAR_4[1] = VAR_8;
 return FUNC_3(VAR_4, VAR_1);
}
