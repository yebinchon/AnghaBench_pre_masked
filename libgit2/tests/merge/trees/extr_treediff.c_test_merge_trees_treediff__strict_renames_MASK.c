
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_12__ {int member_0; char* member_1; char* member_3; int member_2; } ;
struct TYPE_11__ {int member_1; TYPE_6__ member_0; } ;
struct TYPE_10__ {int member_0; char* member_1; char* member_3; int member_2; } ;
struct TYPE_9__ {int member_1; TYPE_4__ member_0; } ;
struct TYPE_8__ {int member_0; char* member_1; char* member_3; int member_2; } ;
struct TYPE_7__ {int member_1; TYPE_2__ member_0; } ;
struct merge_index_conflict_data {int member_3; TYPE_5__ member_2; TYPE_3__ member_1; TYPE_1__ member_0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ,int ,struct merge_index_conflict_data*,int) ;

void FUNC_1(void)
{
 struct merge_index_conflict_data VAR_9[] = {
  {
   { { 0, "", 0, "" }, VAR_4 },
   { { 0100644, "233c0919c998ed110a4b6ff36f353aec8b713487", 0, "added-in-master.txt" }, VAR_0 },
   { { 0, "", 0, "" }, VAR_4 },
   VAR_5,
  },

  {
   { { 0100644, "6212c31dab5e482247d7977e4f0dd3601decf13b", 0, "automergeable.txt" }, VAR_4 },
   { { 0100644, "ee3fa1b8c00aff7fe02065fdb50864bb0d932ccf", 0, "automergeable.txt" }, VAR_2 },
   { { 0100644, "6212c31dab5e482247d7977e4f0dd3601decf13b", 0, "automergeable.txt" }, VAR_4 },
   VAR_5,
  },

  {
   { { 0100644, "ab6c44a2e84492ad4b41bb6bac87353e9d02ac8b", 0, "changed-in-master.txt" }, VAR_4 },
   { { 0100644, "11deab00b2d3a6f5a3073988ac050c2d7b6655e2", 0, "changed-in-master.txt" }, VAR_2 },
   { { 0100644, "ab6c44a2e84492ad4b41bb6bac87353e9d02ac8b", 0, "changed-in-master.txt" }, VAR_4 },
   VAR_5,
  },

  {
   { { 0100644, "d427e0b2e138501a3d15cc376077a3631e15bd46", 0, "conflicting.txt" }, VAR_4 },
   { { 0100644, "4e886e602529caa9ab11d71f86634bd1b6e0de10", 0, "conflicting.txt" }, VAR_2 },
   { { 0100644, "d427e0b2e138501a3d15cc376077a3631e15bd46", 0, "conflicting.txt" }, VAR_4 },
   VAR_5,
  },

  {
   { { 0100644, "dfe3f22baa1f6fce5447901c3086bae368de6bdd", 0, "removed-in-branch.txt" }, VAR_4 },
   { { 0100644, "dfe3f22baa1f6fce5447901c3086bae368de6bdd", 0, "removed-in-branch.txt" }, VAR_4 },
   { { 0100644, "dfe3f22baa1f6fce5447901c3086bae368de6bdd", 0, "renamed-in-branch.txt" }, VAR_3 },
   VAR_5,
  },

  {
   { { 0100644, "5c3b68a71fc4fa5d362fd3875e53137c6a5ab7a5", 0, "removed-in-master.txt" }, VAR_4 },
   { { 0, "", 0, "" }, VAR_1 },
   { { 0100644, "5c3b68a71fc4fa5d362fd3875e53137c6a5ab7a5", 0, "removed-in-master.txt" }, VAR_4 },
   VAR_5,
  },

  {
   { { 0, "", 0, "" }, VAR_4 },
   { { 0, "", 0, "" }, VAR_4 },
   { { 0100644, "c8f06f2e3bb2964174677e91f0abead0e43c9e5d", 0, "renamed.txt" }, VAR_0 },
   VAR_5,
  },

  {
   { { 0100644, "c8f06f2e3bb2964174677e91f0abead0e43c9e5d", 0, "unchanged.txt" }, VAR_4 },
   { { 0100644, "c8f06f2e3bb2964174677e91f0abead0e43c9e5d", 0, "unchanged.txt" }, VAR_4 },
   { { 0100644, "c8f06f2e3bb2964174677e91f0abead0e43c9e5d", 0, "copied.txt" }, VAR_3 },
   VAR_5,
  },
    };

 FUNC_0(VAR_6, VAR_7, VAR_8, VAR_9, 8);
}
