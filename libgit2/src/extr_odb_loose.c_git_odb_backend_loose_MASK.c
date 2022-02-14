
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * free; int * freshen; int * foreach; int * exists_prefix; int * exists; int * readstream; int * writestream; int * read_header; int * read_prefix; int * write; int * read; int version; } ;
struct TYPE_6__ {size_t objects_dirlen; char* objects_dir; int object_zlib_level; int fsync_object_files; unsigned int object_dir_mode; unsigned int object_file_mode; TYPE_1__ parent; } ;
typedef TYPE_2__ loose_backend ;
typedef int git_odb_backend ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (size_t*,size_t,int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 TYPE_2__* FUNC_3 (int,size_t) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_4 (char*,char const*,size_t) ;
 size_t FUNC_5 (char const*) ;

int FUNC_6(
 git_odb_backend **VAR_15,
 const char *VAR_16,
 int VAR_17,
 int VAR_18,
 unsigned int VAR_19,
 unsigned int VAR_20)
{
 loose_backend *VAR_21;
 size_t VAR_22, VAR_23;

 FUNC_2(VAR_15 && VAR_16);

 VAR_22 = FUNC_5(VAR_16);

 FUNC_1(&VAR_23, sizeof(loose_backend), VAR_22);
 FUNC_1(&VAR_23, VAR_23, 2);
 VAR_21 = FUNC_3(1, VAR_23);
 FUNC_0(VAR_21);

 VAR_21->parent.version = VAR_2;
 VAR_21->objects_dirlen = VAR_22;
 FUNC_4(VAR_21->objects_dir, VAR_16, VAR_22);
 if (VAR_21->objects_dir[VAR_21->objects_dirlen - 1] != '/')
  VAR_21->objects_dir[VAR_21->objects_dirlen++] = '/';

 if (VAR_17 < 0)
  VAR_17 = VAR_3;

 if (VAR_19 == 0)
  VAR_19 = VAR_0;

 if (VAR_20 == 0)
  VAR_20 = VAR_1;

 VAR_21->object_zlib_level = VAR_17;
 VAR_21->fsync_object_files = VAR_18;
 VAR_21->object_dir_mode = VAR_19;
 VAR_21->object_file_mode = VAR_20;

 VAR_21->parent.read = &VAR_9;
 VAR_21->parent.write = &VAR_13;
 VAR_21->parent.read_prefix = &VAR_11;
 VAR_21->parent.read_header = &VAR_10;
 VAR_21->parent.writestream = &VAR_14;
 VAR_21->parent.readstream = &VAR_12;
 VAR_21->parent.exists = &VAR_4;
 VAR_21->parent.exists_prefix = &VAR_5;
 VAR_21->parent.foreach = &VAR_6;
 VAR_21->parent.freshen = &VAR_8;
 VAR_21->parent.free = &VAR_7;

 *VAR_15 = (git_odb_backend *)VAR_21;
 return 0;
}
