
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int git_push ;
struct TYPE_7__ {char const* data; size_t len; } ;
typedef TYPE_1__ git_pkt_data ;
typedef int git_pkt ;
struct TYPE_8__ {size_t size; char* ptr; } ;
typedef TYPE_2__ git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (TYPE_2__*,char const*) ;
 int FUNC_2 (TYPE_2__*,char const*,size_t) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,char const**,char const*,size_t) ;

__attribute__((used)) static int FUNC_5(git_push *VAR_2, git_pkt_data *VAR_3, git_buf *VAR_4)
{
 git_pkt *VAR_5;
 const char *VAR_6, *VAR_7 = ((void*)0);
 size_t VAR_8;
 int VAR_9;
 int VAR_10 = VAR_4->size > 0;

 if (VAR_10) {


  FUNC_2(VAR_4, VAR_3->data, VAR_3->len);
  VAR_6 = VAR_4->ptr;
  VAR_8 = VAR_4->size;
 }
 else {
  VAR_6 = VAR_3->data;
  VAR_8 = VAR_3->len;
 }

 while (VAR_8 > 0) {
  VAR_9 = FUNC_4(&VAR_5, &VAR_7, VAR_6, VAR_8);

  if (VAR_9 == VAR_0) {


   if (!VAR_10)
    FUNC_2(VAR_4, VAR_6, VAR_8);
   VAR_9 = 0;
   goto done;
  }
  else if (VAR_9 < 0)
   goto done;


  VAR_8 -= (VAR_7 - VAR_6);
  VAR_6 = VAR_7;

  VAR_9 = FUNC_0(VAR_2, VAR_5);

  FUNC_3(VAR_5);

  if (VAR_9 < 0 && VAR_9 != VAR_1)
   goto done;
 }

 VAR_9 = 0;

done:
 if (VAR_10)
  FUNC_1(VAR_4, VAR_7);
 return VAR_9;
}
