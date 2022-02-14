
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_size; int st_mode; } ;
struct object_id {int dummy; } ;
struct index_state {int dummy; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct index_state*,struct object_id*,int,int ,int,char const*,unsigned int) ;
 int FUNC_3 (struct index_state*,struct object_id*,int,int,char const*,unsigned int) ;
 int FUNC_4 (struct object_id*,int,int ,int,char const*,unsigned int) ;
 int FUNC_5 (struct index_state*,struct object_id*,int,char const*,unsigned int) ;
 scalar_t__ FUNC_6 (struct index_state*,char const*) ;
 scalar_t__ FUNC_7 (struct index_state*,char const*) ;
 int FUNC_8 (scalar_t__) ;

int FUNC_9(struct index_state *VAR_2, struct object_id *VAR_3,
      int VAR_4, struct stat *VAR_5,
      enum object_type VAR_6, const char *VAR_7, unsigned VAR_8)
{
 int VAR_9;





 if (VAR_6 == VAR_0 && VAR_7 && FUNC_7(VAR_2, VAR_7))
  VAR_9 = FUNC_5(VAR_2, VAR_3, VAR_4, VAR_7, VAR_8);
 else if (!FUNC_0(VAR_5->st_mode))
  VAR_9 = FUNC_3(VAR_2, VAR_3, VAR_4, VAR_6, VAR_7, VAR_8);
 else if (VAR_5->st_size <= VAR_1 || VAR_6 != VAR_0 ||
   (VAR_7 && FUNC_6(VAR_2, VAR_7)))
  VAR_9 = FUNC_2(VAR_2, VAR_3, VAR_4, FUNC_8(VAR_5->st_size),
     VAR_6, VAR_7, VAR_8);
 else
  VAR_9 = FUNC_4(VAR_3, VAR_4, FUNC_8(VAR_5->st_size), VAR_6, VAR_7,
       VAR_8);
 FUNC_1(VAR_4);
 return VAR_9;
}
