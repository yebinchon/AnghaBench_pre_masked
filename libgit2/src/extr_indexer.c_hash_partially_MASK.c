
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {size_t inbuf_len; int const* inbuf; int trailer; } ;
typedef TYPE_1__ git_indexer ;


 size_t VAR_0 ;
 int FUNC_0 (int *,int const*,size_t) ;
 int FUNC_1 (int const*,int const*,size_t) ;
 int FUNC_2 (int const*,int const*,size_t) ;

__attribute__((used)) static void FUNC_3(git_indexer *VAR_1, const uint8_t *VAR_2, size_t VAR_3)
{
 size_t VAR_4, VAR_5;

 if (VAR_3 == 0)
  return;


 if (VAR_3 >= VAR_0) {
  FUNC_0(&VAR_1->trailer, VAR_1->inbuf, VAR_1->inbuf_len);
  FUNC_0(&VAR_1->trailer, VAR_2, VAR_3 - VAR_0);

  VAR_2 += VAR_3 - VAR_0;
  FUNC_1(VAR_1->inbuf, VAR_2, VAR_0);
  VAR_1->inbuf_len = VAR_0;
  return;
 }


 if (VAR_1->inbuf_len + VAR_3 <= VAR_0) {
  FUNC_1(VAR_1->inbuf + VAR_1->inbuf_len, VAR_2, VAR_3);
  VAR_1->inbuf_len += VAR_3;
  return;
 }


 VAR_5 = VAR_0 - VAR_3;
 VAR_4 = VAR_1->inbuf_len - VAR_5;

 FUNC_0(&VAR_1->trailer, VAR_1->inbuf, VAR_4);

 FUNC_2(VAR_1->inbuf, VAR_1->inbuf + VAR_4, VAR_5);
 FUNC_1(VAR_1->inbuf + VAR_5, VAR_2, VAR_3);
 VAR_1->inbuf_len += VAR_3 - VAR_4;
}
