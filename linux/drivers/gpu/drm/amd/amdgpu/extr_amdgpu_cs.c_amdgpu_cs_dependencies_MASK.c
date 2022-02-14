
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_device {int dummy; } ;
struct amdgpu_cs_parser {int nchunks; struct amdgpu_cs_chunk* chunks; } ;
struct amdgpu_cs_chunk {int chunk_id; } ;
 int FUNC_0 (struct amdgpu_cs_parser*,struct amdgpu_cs_chunk*) ;
 int FUNC_1 (struct amdgpu_cs_parser*,struct amdgpu_cs_chunk*) ;
 int FUNC_2 (struct amdgpu_cs_parser*,struct amdgpu_cs_chunk*) ;
 int FUNC_3 (struct amdgpu_cs_parser*,struct amdgpu_cs_chunk*) ;
 int FUNC_4 (struct amdgpu_cs_parser*,struct amdgpu_cs_chunk*) ;

__attribute__((used)) static int FUNC_5(struct amdgpu_device *VAR_0,
      struct amdgpu_cs_parser *VAR_1)
{
 int VAR_2, VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_1->nchunks; ++VAR_2) {
  struct amdgpu_cs_chunk *VAR_4;

  VAR_4 = &VAR_1->chunks[VAR_2];

  switch (VAR_4->chunk_id) {
  case 133:
  case 132:
   VAR_3 = FUNC_0(VAR_1, VAR_4);
   if (VAR_3)
    return VAR_3;
   break;
  case 131:
   VAR_3 = FUNC_1(VAR_1, VAR_4);
   if (VAR_3)
    return VAR_3;
   break;
  case 130:
   VAR_3 = FUNC_2(VAR_1, VAR_4);
   if (VAR_3)
    return VAR_3;
   break;
  case 128:
   VAR_3 = FUNC_3(VAR_1, VAR_4);
   if (VAR_3)
    return VAR_3;
   break;
  case 129:
   VAR_3 = FUNC_4(VAR_1, VAR_4);
   if (VAR_3)
    return VAR_3;
   break;
  }
 }

 return 0;
}
