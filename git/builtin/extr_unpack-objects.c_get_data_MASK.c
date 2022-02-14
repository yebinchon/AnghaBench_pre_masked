
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int stream ;
struct TYPE_6__ {unsigned long avail_out; void* avail_in; unsigned long total_out; void* next_in; void* next_out; } ;
typedef TYPE_1__ git_zstream ;


 int FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_7 (TYPE_1__*,int ,int) ;
 int VAR_4 ;
 int FUNC_8 (void*) ;
 void* FUNC_9 (unsigned long) ;

__attribute__((used)) static void *FUNC_10(unsigned long VAR_5)
{
 git_zstream VAR_6;
 void *VAR_7 = FUNC_9(VAR_5);

 FUNC_7(&VAR_6, 0, sizeof(VAR_6));

 VAR_6.next_out = VAR_7;
 VAR_6.avail_out = VAR_5;
 VAR_6.next_in = FUNC_3(1);
 VAR_6.avail_in = VAR_3;
 FUNC_6(&VAR_6);

 for (;;) {
  int VAR_8 = FUNC_4(&VAR_6, 0);
  FUNC_8(VAR_3 - VAR_6.avail_in);
  if (VAR_6.total_out == VAR_5 && VAR_8 == VAR_1)
   break;
  if (VAR_8 != VAR_0) {
   FUNC_1("inflate returned %d", VAR_8);
   FUNC_0(VAR_7);
   if (!VAR_4)
    FUNC_2(1);
   VAR_2 = 1;
   break;
  }
  VAR_6.next_in = FUNC_3(1);
  VAR_6.avail_in = VAR_3;
 }
 FUNC_5(&VAR_6);
 return VAR_7;
}
