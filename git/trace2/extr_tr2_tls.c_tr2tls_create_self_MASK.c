
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {scalar_t__ len; } ;
struct tr2tls_thread_ctx {int alloc; TYPE_1__ thread_name; scalar_t__ thread_id; int nr_open_regions; int * array_us_start; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct tr2tls_thread_ctx*) ;
 int FUNC_1 (TYPE_1__*,char*,scalar_t__) ;
 int FUNC_2 (TYPE_1__*,char const*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (int *) ;
 struct tr2tls_thread_ctx* FUNC_6 (int,int) ;

struct tr2tls_thread_ctx *FUNC_7(const char *VAR_4,
          uint64_t VAR_5)
{
 struct tr2tls_thread_ctx *VAR_6 = FUNC_6(1, sizeof(*VAR_6));






 VAR_6->alloc = VAR_1;
 VAR_6->array_us_start = (uint64_t *)FUNC_6(VAR_6->alloc, sizeof(uint64_t));
 VAR_6->array_us_start[VAR_6->nr_open_regions++] = VAR_5;

 VAR_6->thread_id = FUNC_5(&VAR_2);

 FUNC_3(&VAR_6->thread_name, 0);
 if (VAR_6->thread_id)
  FUNC_1(&VAR_6->thread_name, "th%02d:", VAR_6->thread_id);
 FUNC_2(&VAR_6->thread_name, VAR_4);
 if (VAR_6->thread_name.len > VAR_0)
  FUNC_4(&VAR_6->thread_name, VAR_0);

 FUNC_0(VAR_3, VAR_6);

 return VAR_6;
}
