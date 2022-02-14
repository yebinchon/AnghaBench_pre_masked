
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {unsigned char* next_in; unsigned long avail_in; unsigned long avail_out; void* next_out; } ;
typedef TYPE_1__ git_zstream ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int FUNC_3(git_zstream *VAR_0,
         unsigned char *VAR_1, unsigned long VAR_2,
         void *VAR_3, unsigned long VAR_4)
{

 FUNC_2(VAR_0, 0, sizeof(*VAR_0));
 VAR_0->next_in = VAR_1;
 VAR_0->avail_in = VAR_2;
 VAR_0->next_out = VAR_3;
 VAR_0->avail_out = VAR_4;

 FUNC_1(VAR_0);
 return FUNC_0(VAR_0, 0);
}
