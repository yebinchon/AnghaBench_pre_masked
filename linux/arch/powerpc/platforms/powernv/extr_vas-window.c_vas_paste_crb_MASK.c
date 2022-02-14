
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vas_window {int winid; void* paste_kaddr; scalar_t__ nx_win; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,unsigned long long,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (struct vas_window*,int ) ;
 int FUNC_5 (int ,struct vas_window*) ;
 int FUNC_6 (void*,int) ;

int FUNC_7(struct vas_window *VAR_4, int VAR_5, bool VAR_6)
{
 int VAR_7;
 void *VAR_8;
 uint64_t VAR_9;

 FUNC_5(VAR_3, VAR_4);






 FUNC_2(VAR_4->nx_win && !VAR_6);

 VAR_8 = VAR_4->paste_kaddr;
 if (VAR_6) {




  VAR_9 = FUNC_0(VAR_2, 0ULL, 1);
  VAR_8 += VAR_9;
 }





 VAR_7 = FUNC_6(VAR_8, VAR_5);
 if (VAR_7 == 2)
  VAR_7 = 0;
 else
  VAR_7 = -VAR_0;

 FUNC_3("Txwin #%d: Msg count %llu\n", VAR_4->winid,
   FUNC_4(VAR_4, FUNC_1(VAR_1)));

 return VAR_7;
}
